//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qxml.h>

class x_QXmlLocator : public QXmlLocator {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlLocator()
	x_QXmlLocator* xret = new x_QXmlLocator();
	x[0].s_class = (void*)xret;
    }
    x_QXmlLocator() : QXmlLocator() {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlLocator(const QXmlLocator&)
	x_QXmlLocator* xret = new x_QXmlLocator(*(const QXmlLocator *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlLocator(const QXmlLocator& x1) : QXmlLocator(x1) {
    }
    virtual int columnNumber() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(12020, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual int lineNumber() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(12021, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    ~x_QXmlLocator() { qt_Smoke->binding->deleted(380, (void*)this); }
};
void xcall_QXmlLocator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlLocator *xself = (x_QXmlLocator*)obj;
    switch(xi) {
	case 0: x_QXmlLocator::x_0(args);	break;
	case 1: x_QXmlLocator::x_1(args);	break;
	case 2: delete (QXmlLocator*)xself;	break;
    }
}
