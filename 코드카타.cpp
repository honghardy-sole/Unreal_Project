#include <iostream>

using namespace std;



long long solution(long long n) 
{
    long long answer = -1;

    for (int i = 1; i < n; ++i)
    {
        if (i*i == n)
        {
            answer = (i + 1) * (i + 1);
                break;
        }

    }


    return answer;
}
int main() {

    int solutionA = solution(121);
    int solutionB = solution(3);

	cout << solutionA << endl;
	cout << solutionB << endl;

	return 0;
}