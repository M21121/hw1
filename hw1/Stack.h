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
        const Object& temp = theList.front();
        Object out = temp;
        theList.pop_front();
        return out;
    }
private:
    List<Object> theList;
};
//My Github Reop: https://github.com/M21121/hw1