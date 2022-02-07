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
    }
    Object& dequeue()
    {
        auto temp = theList.back();
        theList.pop_back();
        return temp;
    }
private:
    List<Object> theList;
};
