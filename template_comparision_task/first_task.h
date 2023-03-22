#include <string>

template<typename T>
class OtherComparisionOperators
{
public:
    template<typename P>
    bool operator>=(const P& other) const
    {
        return !(self() < other);
    }
    template<typename P>
    bool operator<=(const P& other) const
    {
        return !(self() > other);
    }
    template<typename P>
    bool operator==(const P& other) const
    {
        return !(self() > other) && !(self() < other);
    }
    template<typename P>
    bool operator!=(const P& other) const
    {
        //return !(self() == other);
        return (self() > other) || (self() < other);
    }
private:
    const T& self() const
    {
        return static_cast<const T&>(*this);
    }
};

class NewA: public OtherComparisionOperators<NewA>
{
public:
    NewA(int a, int b) : m_a(a), m_b(b){}

    // Операторы сравнения с NewA
    bool operator<(const NewA& other) const
    {
        return (m_a < other.m_a) && (m_b < other.m_b);
    }
    bool operator>(const NewA& other) const
    {
        return (m_a > other.m_a) && (m_b > other.m_b);
    }

    // Операторы сравнения с int
    bool operator<(const int other) const
    {
        return m_a < other;
    }
    bool operator>(const int other) const
    {
        return m_a > other;
    }

    // Операторы сравнения с float
    bool operator<(const float other) const
    {
        return static_cast<float>(m_a) < other;
    }
    bool operator>(const float other) const
    {
        return static_cast<float>(m_a) > other;
    }

    // Операторы сравнения с double
    bool operator<(const double other) const
    {
        return static_cast<double>(m_a) < other;
    }
    bool operator>(const double other) const
    {
        return static_cast<double>(m_a) > other;
    }

    // Операторы сравнения с char
    bool operator<(const char other) const
    {
        return m_a < static_cast<int>(other);
    }
    bool operator>(const char other) const
    {
        return m_a > static_cast<int>(other);
    }

private:
    int m_a = 0;
    int m_b = 0;
};


class NewB : public OtherComparisionOperators<NewB>
 {
 public:
    NewB(std::string_view val) : m_stringView(val){}

    // Операторы сравнения с std::string
    bool operator<(const std::string& other) const
    {
        return m_stringView < other;
    }
    bool operator>(const std::string& other) const
    {
        return m_stringView > other;
    }

 private:
    std::string_view m_stringView;
 };
