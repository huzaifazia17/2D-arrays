#include <iostream>
#include <string>

using namespace std;

int main()
{
    string criteria1 = "Idea";
    string criteria2 = "Novelty";
    string criteria3 = "Contribution";
    string criteria4 = "Paper Organization";
    string criteria5 = "Paper Evaluation";
    string criteria[5] = {criteria1, criteria2, criteria3, criteria4, criteria5};

    int reviewers[4][5];
    double AVG_1{0}, AVG_2{0}, AVG_3{0}, AVG_4{0};
    double TOTAL_AVG;

    cout << "In this program, 4 reviewers will grade a paper in 5 criterias, giving a score from 1-10" << endl;
    cout << "The criterias are as follows:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Criteria " << i + 1 << " is " << criteria[i] << endl;
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "Enter a grade for Criteria " << j << " of Reviewer " << i << " : ";
            cin >> reviewers[i - 1][j - 1];
            while (reviewers[i - 1][j - 1] < 0 || reviewers[i - 1][j - 1] > 10)
            {
                cout << "Enter a Grade Greater than 0 and less than 10 for Criteria " << j << " of Reviewer " << i << " : ";
                cin >> reviewers[i - 1][j - 1];
            }
        }
    }

    for (int j = 0; j <= 4; j++)
    {
        AVG_1 += reviewers[0][j];
    }
    AVG_1 = AVG_1 / 5;

    for (int j = 0; j <= 4; j++)
    {
        AVG_2 += reviewers[1][j];
    }
    AVG_2 = AVG_2 / 5;

    for (int j = 0; j <= 4; j++)
    {
        AVG_3 += reviewers[2][j];
    }
    AVG_3 = AVG_3 / 5;

    for (int j = 0; j <= 4; j++)
    {
        AVG_4 += reviewers[3][j];
    }
    AVG_4 = AVG_4 / 5;

    TOTAL_AVG = (AVG_1 + AVG_2 + AVG_3 + AVG_4) / 4;

    if (AVG_1 >= 5 && AVG_2 >= 5 && AVG_3 >= 5 && AVG_4 >= 5 && TOTAL_AVG >= 7)
    {
        cout << "The paper is accepted:\n"
             << "The total Average was: " << TOTAL_AVG << endl;
    }
    else if (AVG_1 < 5 || AVG_2 < 5 || AVG_3 < 5 || AVG_4 < 5 || TOTAL_AVG < 6)
    {
        cout << "The paper is rejected\n"
             << "The total Average was: " << TOTAL_AVG << endl;
    }
    else if (TOTAL_AVG >= 6 && TOTAL_AVG < 7)
    {
        cout << "The paper is borderline\n"
             << "The total Average was: " << TOTAL_AVG << endl;
    }
    else
    {
        return 0;
    }
}