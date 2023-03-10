class NewA
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

private:
    int m_a = 0;
    int m_b = 0;
};