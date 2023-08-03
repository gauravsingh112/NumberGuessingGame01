#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num=rand()%100+1;

    cout<<"*******NUMBER GUESS GAME*******\n";
    cout<<"Enter Your Number between(1-100): ";
    do
    {
        cout<<"Enter a Guess between (1-100): ";
        cin>>guess;
        tries++;
        if(guess>num){
            cout<<"Too High!\n";
        }
       else if(guess<num){
            cout<<"Too Low!\n";
        }
        else{
            cout<<"CORRECT! # of tries: "<<tries<< '\n';
        }
         } while (guess!=num);
    cout<<"*****************END OF GAME********\n";
         return 0;
         }


