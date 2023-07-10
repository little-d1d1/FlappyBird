
#ifndef INFO_H
#define INFO_H

#include <qstring.h>


class BirdInfo
{
public:
    BirdInfo() throw();
    BirdInfo(const BirdInfo& b);
	void set_Name(const QString& name);
	const QString& get_Name() const throw();
	void set_x(int x) throw();
	int get_x() const throw();
	void set_y(int y) throw();
	int get_y() const throw();
	void set_h(int h) throw();
	int get_h() const throw();
	void set_w(int w) throw();
	int get_w() const throw();
private:
    QString name;
    int x;
    int y;
    int h;
    int w;
};

#endif // INFO_H
