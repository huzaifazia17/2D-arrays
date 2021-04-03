#include <iostream>

using namespace std;

int main()
{
    string criteria[5] = {"Idea", "Novelty", "Contribution", "Paper Organization", "Paper Evaluation"};
    int reviewers[4][5];
    double AVG_1{0}, AVG_2{0}, AVG_3{0}, AVG_4{0};
    double TOTAL_AVG;

    cout << "In this program, 4 reviewers will grade a paper in 5 criterias, giving a score from 1-10" << endl;
    cout << "The criterias are as follows:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Criteria " << i + 1 << " is " << criteria[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter a grade for Criteria " << j + 1 << " of Reviewer " << i + 1 << "  : ";
            cin >> reviewers[i][j];
            while (reviewers[i][j] < 0 || reviewers[i][j] > 10)
            {
                cout << "Enter a grade Greater than 0 and less than 10 for Criteria " << j + 1 << " of Reviewer " << i + 1 << " : ";
                cin >> reviewers[i][j];
            }
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        AVG_1 += reviewers[0][i];
        AVG_2 += reviewers[1][i];
        AVG_3 += reviewers[2][i];
        AVG_4 += reviewers[3][i];
    }
    AVG_1 = AVG_1 / 5;
    AVG_2 = AVG_2 / 5;
    AVG_3 = AVG_3 / 5;
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
