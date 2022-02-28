/*
Author: Sighfy
Project: PC6_12
Description: Star Search
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getJudgeData(double &score);
void calcScore(double score1, double score2,
                 double score3, double score4,
                 double score5);
int findHighest(double score1, double score2,
                double score3, double score4,
                double score5);
int findLowest(double score1, double score2,
               double score3, double score4,
               double score5);

int main()
{
    double score1, score2, score3, score4, score5;
    
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    
    calcScore(score1, score2, score3, score4, score5);

    return 0;
}

void getJudgeData(double &score)
{
    do
    {
        cout << "Enter a judge's score: ";
        cin  >> score;

        if (score < 0 || score > 10)
        {
            cout << "The score must be between 0.0 and 10.0\n";
        }

    } while (score < 0 || score > 10);
}

void calcScore(double score1, double score2,
               double score3, double score4,
               double score5)
{
    int    high, low;
    double  avg;

    high = findHighest(score1, score2, score3, score4, score5);
    low  = findLowest(score1, score2, score3, score4, score5);

    if (high == static_cast<int>(score1))
    {
        if (low == static_cast<int>(score2))
        {
            avg = (score3 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score3))
        {
            avg = (score2 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score4))
        {
            avg = (score3 + score2 + score5)/3;
        }
        else
        {
            avg = (score2 + score3 + score4)/3;
        }
    }
    else if (high == static_cast<int>(score2))
    {
        if (low == static_cast<int>(score1))
        {
            avg = (score3 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score3))
        {
            avg = (score1 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score4))
        {
            avg = (score3 + score1 + score5)/3;
        }
        else
        {
            avg = (score1 + score3 + score4)/3;
        }
    }
    else if (high == static_cast<int>(score3))
    {
        if (low == static_cast<int>(score2))
        {
            avg = (score1 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score1))
        {
            avg = (score2 + score4 + score5)/3;
        }
        else if (low == static_cast<int>(score4))
        {
            avg = (score1 + score2 + score5)/3;
        }
        else
        {
            avg = (score2 + score1 + score4)/3;
        }
    }
    else if (high == static_cast<int>(score4))
    {
        if (low == static_cast<int>(score2))
        {
            avg = (score3 + score1 + score5)/3;
        }
        else if (low == static_cast<int>(score3))
        {
            avg = (score2 + score1 + score5)/3;
        }
        else if (low == static_cast<int>(score1))
        {
            avg = (score3 + score2 + score5)/3;
        }
        else
        {
            avg = (score2 + score3 + score1)/3;
        }
    }
    else
    {
        if (low == static_cast<int>(score2))
        {
            avg = (score3 + score4 + score1)/3;
        }
        else if (low == static_cast<int>(score3))
        {
            avg = (score2 + score4 + score1)/3;
        }
        else if (low == static_cast<int>(score4))
        {
            avg = (score3 + score2 + score1)/3;
        }
        else
        {
            avg = (score2 + score3 + score4)/3;
        }
    }
    
    avg = floor(avg * 10) / 10;

    cout << "After dropping the lowest and highest scores, "
    << "the average score was "
    << fixed << setprecision(1) << avg << ".\n";
}

int findHighest(double score1, double score2,
                double score3, double score4,
                double score5)
{
    double place = 0.0;
    if (score1 > score2 && score1 > score3 &&
        score1 > score4 && score1 > score5)
    {
        score1 = place;
        //return score1;
    }
    else if (score2 > score1 && score2 > score3 &&
             score2 > score4 && score2 > score5)
    {
        score2 = place;
        //return score2;
    }
    else if (score3 > score2 && score3 > score1 &&
             score3 > score4 && score3 > score5)
    {
        score3 = place;
        //return score3;
    }
    else if (score4 > score2 && score4 > score3 &&
             score4 > score1 && score4 > score5)
    {
        score4 = place;
        //return score4;
    }
    else
    {
        score5 = place;
        //return score5;
    }
    return place;
}

int findLowest(double score1, double score2,
               double score3, double score4,
               double score5)
{
    double place = 0.0;
    if (score1 < score2 && score1 < score3 &&
        score1 < score4 && score1 < score5)
    {
        score1 = place;
        //return score1;
    }
    else if (score2 < score1 && score2 < score3 &&
             score2 < score4 && score2 < score5)
    {
        score2 = place;
        //return score2;
    }
    else if (score3 < score2 && score3 < score1 &&
             score3 < score4 && score3 < score5)
    {
        score3 = place;
        //return score3;
    }
    else if (score4 < score2 && score4 < score3 &&
             score4 < score1 && score4 < score5)
    {
        score4 = place;
        //return score4;
    }
    else
    {
        score5 = place;
        //return score5;
    }
    return place;
}
