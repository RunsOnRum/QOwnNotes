#ifndef TESTNOTES_H
#define TESTNOTES_H

//#include "basetestcase.h"
//#include "models/key-models/keyfactory.h"
#include <QObject>
#include "note.h"

class TestNotes : public QObject
{
    Q_OBJECT

//public:
//    TestNotes();

private:
    QString notesPath;
    QString noteFile;
    QString noteName;
    QString noteFileName;

//private slots:
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testNoteCreating();

};

#endif // TESTNOTES_H
