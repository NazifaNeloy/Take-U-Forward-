#include<iostream>
using namespace std;

void divisors(int n ){

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    
}

int main(){

    int n ;
    cin>>n;
   divisors(n);
    return 0;
}



function finalScore(obj) {

    if (typeof obj !== "object" || obj === null || Array.isArray(obj)) {
        return "Invalid";
    }

    let right = obj.right;
    let wrong = obj.wrong;
    let skip = obj.skip;

  
    if (typeof right !== "number" || typeof wrong !== "number" || typeof skip !== "number") {
        return "Invalid";
    }

    let total = right + wrong + skip;
    
    if (total !== 100) {
        return "Invalid";
    }

    let score = right - (wrong * 0.5);


    let finalScore = Math.round(score);

    return finalScore;
}


console.log(finalScore({"right":67,"wrong":23,"skip":10}));
console.log(finalScore({"right":80,"wrong":25,"skip":0}));  
console.log(finalScore({"right":50,"wrong":10,"skip":40})); 
console.log(finalScore({"right":30,"wrong":30,"skip":40})); 
console.log(finalScore("!@#"));                              
console.log(finalScore(["Raj"]));                          
