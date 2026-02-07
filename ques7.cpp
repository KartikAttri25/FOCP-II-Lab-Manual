/*Q7. A game compares three players scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner.*/

#include<iostream>

using namespace std;

int main()
{
    int score1;int score2;int score3;
    int great;

    cout<<"enter the score of 1st player:";
    cin>>score1;
    cout<<"enter the score of 2nd player:";
    cin>>score2;
    cout<<"enter the score of 3rd player:";
    cin>>score3;

    great=score1;
    if(score2>score1&&score2>score3)
    great=score2;
    else if (score3>score1&&score3>score2)
    great=score3;
    else
    great=score1;

    cout<<"greatest score is : "<<great ;

}