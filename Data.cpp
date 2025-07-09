#include "Data.h"

Gtime::Gtime(short y, short m, short d)
	:year{ y }, month{ m }, day{d}
{
}

short Gtime::outY() const
{
	return year;
}

short Gtime::outM() const
{
	return month;
}

short Gtime::outD() const
{
	return day;
}

const std::string& RankRecord::bNumber() const
{
	return std::to_string(b.n);
}

const Gtime& RankRecord::outT() const
{
	return t;
}

std::ostream& operator<<(std::ostream& os, const RankRecord& r)
{
	std::print(os, "[{:2}/{:2}/{:2}] {:3} {:3} {:3}", r.t.outY(), r.t.outM(), r.t.outD(), r.g1, r.g2,r.g3);
	return os;
}
