
from flask import Flask,render_template,Response
import cv2 
app=Flask(__name__)

camera=cv2.VideoCapture(0)


def generate_frame():
    #read the camera frame
    while True:
        success,frame=camera.read()
        if not success:
            break
        else:
            
            ret,buffer=cv2.imencode('.jpeg',frame)
            frame=buffer.tobytes()
            
        yield(b'--frame\r\n'
              b'Content-Type: imgae/jpeg\r\n\r\n' + frame + b'\r\n')    
            
        

@app.route('/')
def index():
    return render_template('camera.html')

@app.route('/vedio')
def vedio():
    
    return Response(generate_frame(),mimetype='multipart/x-mixed-replace; boundary=frame')

if __name__=='__main__':
    app.run(debug=True)    
    