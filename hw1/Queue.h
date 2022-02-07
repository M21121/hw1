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
        theList.push_front(x);
    }
    Object& dequeue()
    {
        Object temp = theList.back();
        theList.pop_back();
        return temp;
        return *theList.begin();
    }
private:
    List<Object> theList;
};
