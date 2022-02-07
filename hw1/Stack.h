#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return theList.empty();
    }
    const Object& top() const
    {
        return theList.front();
    }
    void push(const Object& x)
    {
        theList.push_front(x);
    }
    Object& pop()
    {
        //auto temp = theList.front();
        //theList.pop_front();
        //return temp;
        return *theList.begin();
    }
private:
    List<Object> theList;
};