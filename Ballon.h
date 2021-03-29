#include <cstdlib>
#include <vector>

#ifndef BALLON_BALLON_H
#define BALLON_BALLON_H


class ballon
{
private:
    int startx;
    int endx;

public:

    ballon(){};

    ballon(int start, int end)
    {
        startx=start;
        endx=end;
    }

    int getStart() { return startx; }

    int  getEnd() { return endx; }

    void setStart(int x) { startx=x; }

    void setEnd(int x) { endx=x; }

    static ballon generator()
    {
        int start=rand()% 8;
        int end=start + rand()% 6;
        return ballon(start, end);
    }

    static void sort (std::vector<ballon>& ballons)
    {
        for (int i=0; i<ballons.size()-1; i++)
        {
            for (int j=i+1; j<ballons.size(); j++)
            {
                if (ballons[i].getEnd() > ballons[j].getEnd())
                {
                    std::swap(ballons[i], ballons[j]);
                }
                //else if (ballons[i].getStart() == ballons[j].getStart())
                //{

                   // if (ballons[i].getEnd() > ballons[j].getEnd())
                    //{
                    //    std::swap(ballons[i], ballons[j]);
                    //}
                //}
            }
        }
    }
};


#endif //BALLON_BALLON_H
