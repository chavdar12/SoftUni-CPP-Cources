#include <iostream>
#include <stack>
#include <sstream>

void read_track(std::stack<int>& track)
{
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    int num;
    while (iss >> num)
    {
        track.push(num);
    }
}

void mergeTracks(std::stack<int>& track_a, std::stack<int>& track_b, std::stack<int>& merge_track)
{
    while (!track_a.empty() || !track_b.empty())
    {
        if (track_b.empty() || (!track_a.empty() && track_a.top() < track_b.top()))
        {
            merge_track.push(track_a.top());
            track_a.pop();
            std::cout << "A";
        }
        else
        {
            merge_track.push(track_b.top());
            track_b.pop();
            std::cout << "B";
        }
    }
    std::cout << '\n';
}

void printMergeTrack(std::stack<int>& merge_track)
{
    while (!merge_track.empty())
    {
        std::cout << merge_track.top() << " ";
        merge_track.pop();
    }
}

int main()
{
    std::stack<int> trackA, trackB, mergeTrack;

    read_track(trackA);
    read_track(trackB);
    mergeTracks(trackA, trackB, mergeTrack);
    printMergeTrack(mergeTrack);

    return 0;
}
