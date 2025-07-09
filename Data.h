#pragma once
#include <string>
#include <iostream>
#include <print>

class Gtime
{
public:
	Gtime() = delete;
	Gtime(short, short, short);

	short outY() const;
	short outM() const;
	short outD() const;
private:
	short year;
	short month;
	short day;
};

struct Bowller
{
	size_t n;
	std::string name;
};

class RankRecord // ��ŷ�� ������, ���� ������
{
public:

	const std::string& bNumber()const;
	const Gtime& outT() const;

	friend std::ostream& operator<<(std::ostream&, const RankRecord&);
private:
	Bowller b;
	short g1;
	short g2;
	short g3;
	Gtime t;
};

class Rank // ��ŷ ������
{
public:

private:
	Bowller b;
	double avg;
};

