#ifndef BACKGROUNDMODEL_H
#define BACKGROUNDMODEL_H

#include <qstring.h>

class BackgroundModel
{
public:
    BackgroundModel();
    QString get_bgname() throw();

private:
    QString bgname;
};

#endif // BACKGROUNDMODEL_H
