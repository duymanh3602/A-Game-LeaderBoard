#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main ()
{
    ifstream nameInput("name.txt");//your name input file here
    ifstream scoreInput("score.txt");//your score input file here
    vector<int>ScoreIn;
    vector<string>NameIn;
    while (!scoreInput.eof())
    {
        int scoreIn;
        scoreInput>>scoreIn;
        ScoreIn.push_back(scoreIn);
        string nameIn;
        getline(nameInput,nameIn);
        NameIn.push_back(nameIn);
    }
        int temp=1;
    while (temp!=4)//how much top-player have you want 
    {
        int dele;
        int maxScore=0;
        for (int i=0;i<ScoreIn.size();i++)
        {
            if (ScoreIn[i]>maxScore)
            {
                maxScore=ScoreIn[i];
                dele=i;
            }
        }
        cout<<"Top: "<<temp<<" Name: "<<NameIn[dele]<<" - Score: "<<ScoreIn[dele]<<endl;
        ScoreIn.erase(ScoreIn.begin()+dele);
        NameIn.erase(NameIn.begin()+dele);
        temp=temp+1;
    }
}
