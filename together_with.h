#ifndef TOGETHER_WITH_H
#define TOGETHER_WITH_H

class Me
{
public:
    template <typename T>
    constexpr bool together_with(const T& t) const 
        noexcept(noexcept(t.together_with(*this)))
    {
        return t.together_with(*this);
    }
};

#endif // TOGETHER_WITH_H
