#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& getFront() const
    {
        return theList.front();
    }
    void enqueue(const Object& x)
    {
        theList.push_back(x);
    }
    Object& dequeue()
    {
        const Object& temp = theList.front();
        Object out = temp;
        theList.pop_front();
        return out;
    }
private:
    List<Object> theList;
};

//My Github Reop: https://github.com/M21121/hw1
