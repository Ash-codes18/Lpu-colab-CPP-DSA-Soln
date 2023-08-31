#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> votes(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> votes[i];
    }

    std::map<int, int> voteCount;
    for (int candidateID : votes)
    {
        voteCount[candidateID]++;
    }

    int majorityThreshold = n / 2 + 1;
    int majorityCandidate = -1;

    for (const auto &entry : voteCount)
    {
        if (entry.second >= majorityThreshold)
        {
            majorityCandidate = entry.first;
            break;
        }
    }

    if (majorityCandidate != -1)
    {
        std::cout << "The majority candidate is ID " << majorityCandidate << std::endl;
    }
    else
    {
        std::cout << "No majority candidate found" << std::endl;
    }

    return 0;
}