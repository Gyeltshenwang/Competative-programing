#Integration of html and css in Flask
from flask import Flask,redirect,url_for,render_template ,request #Dynamic url in flask 

app = Flask(__name__)

@app.route('/')
def hello_world():
    return render_template('index.html') 


@app.route('/success/<int:score>')
def success(score):
    res=''
    if res>=50:
        res = 'PASS'
    else:
        res='FAIL'
    return render_template('results.html',result = res)

@app.route('/fail/<int:score>')
def fail(score):
    return "You are Failed"+str(score)
   
@app.route('/results/<int:marks>')
def results(marks):
    result = ""
    if marks<50:
        result = " fail"
        
    else:
        result = "success"
    return redirect(url_for(result, score=marks))
# this is a result chacker of the html post
#using get and post method 
#after that we will read the posted value

app.route('/submit',methods=['GET','POST'])
def submit():
    total_score=0
    if request.method=="POST":
        science =float(request.form['science'])
        math = float(request.form['math'])
        python = float(request.form['Python'])
        java = float(request.form['java'])
        total_score =(science+maths+python+java)/4
    res=" "
    if total_score>=50:
        res="success"
    else:
        res="fail"
        
    return redirect(url_for(success,score=total_score)) # dynamic url generation
        
    

        
if __name__=='__main__':
    app.run(debug=True)