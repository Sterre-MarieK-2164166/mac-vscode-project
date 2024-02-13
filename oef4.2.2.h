class Date
{
private:
    int m_day{};
    int m_month{};
    int m_year{};

public:
    int get_day() const;
    int get_month() const;
    int get_year() const;
    void set_day(int day);
    void set_month(int month);
    void set_year(int year);
};
