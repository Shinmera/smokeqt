//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qstring.h>
#include <qwhatsthis.h>

class x_QWhatsThis : public QWhatsThis {
public:
    static void x_0(Smoke::Stack x) {
	// QWhatsThis(QWidget*)
	x_QWhatsThis* xret = new x_QWhatsThis((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWhatsThis(QWidget* x1) : QWhatsThis(x1) {
    }
    void x_1(Smoke::Stack x) {
	// text(const QPoint&)
	QString xret = this->QWhatsThis::text(*(const QPoint *)x[1].s_class);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_2(Smoke::Stack x) {
	// clicked(const QString&)
	bool xret = this->QWhatsThis::clicked(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_3(Smoke::Stack x) {
	// QWhatsThis(const QWhatsThis&)
	x_QWhatsThis* xret = new x_QWhatsThis(*(const QWhatsThis *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWhatsThis(const QWhatsThis& x1) : QWhatsThis(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// add(QWidget*, const QString&)
	QWhatsThis::add((QWidget*)x[1].s_class,*(const QString *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_5(Smoke::Stack x) {
	// remove(QWidget*)
	QWhatsThis::remove((QWidget*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_6(Smoke::Stack x) {
	// textFor(QWidget*, const QPoint&, bool)
	QString xret = QWhatsThis::textFor((QWidget*)x[1].s_class,*(const QPoint *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_7(Smoke::Stack x) {
	// textFor(QWidget*, const QPoint&)
	QString xret = QWhatsThis::textFor((QWidget*)x[1].s_class,*(const QPoint *)x[2].s_class);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_8(Smoke::Stack x) {
	// textFor(QWidget*)
	QString xret = QWhatsThis::textFor((QWidget*)x[1].s_class);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_9(Smoke::Stack x) {
	// whatsThisButton(QWidget*)
	QToolButton* xret = QWhatsThis::whatsThisButton((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_10(Smoke::Stack x) {
	// enterWhatsThisMode()
	QWhatsThis::enterWhatsThisMode();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_11(Smoke::Stack x) {
	// inWhatsThisMode()
	bool xret = QWhatsThis::inWhatsThisMode();
	x[0].s_bool = xret;
    }
    static void x_12(Smoke::Stack x) {
	// leaveWhatsThisMode(const QString&, const QPoint&, QWidget*)
	QWhatsThis::leaveWhatsThisMode(*(const QString *)x[1].s_voidp,*(const QPoint *)x[2].s_class,(QWidget*)x[3].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_13(Smoke::Stack x) {
	// leaveWhatsThisMode(const QString&, const QPoint&)
	QWhatsThis::leaveWhatsThisMode(*(const QString *)x[1].s_voidp,*(const QPoint *)x[2].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_14(Smoke::Stack x) {
	// leaveWhatsThisMode(const QString&)
	QWhatsThis::leaveWhatsThisMode(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_15(Smoke::Stack x) {
	// leaveWhatsThisMode()
	QWhatsThis::leaveWhatsThisMode();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_16(Smoke::Stack x) {
	// display(const QString&, const QPoint&, QWidget*)
	QWhatsThis::display(*(const QString *)x[1].s_voidp,*(const QPoint *)x[2].s_class,(QWidget*)x[3].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_17(Smoke::Stack x) {
	// display(const QString&, const QPoint&)
	QWhatsThis::display(*(const QString *)x[1].s_voidp,*(const QPoint *)x[2].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_18(Smoke::Stack x) {
	// display(const QString&)
	QWhatsThis::display(*(const QString *)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual bool clicked(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11374, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWhatsThis::clicked(x1);
    }
    virtual QString text(const QPoint& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11373, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWhatsThis::text(x1);
    }
    ~x_QWhatsThis() { qt_Smoke->binding->deleted(358, (void*)this); }
};
void xcall_QWhatsThis(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWhatsThis *xself = (x_QWhatsThis*)obj;
    switch(xi) {
	case 0: x_QWhatsThis::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: x_QWhatsThis::x_3(args);	break;
	case 4: x_QWhatsThis::x_4(args);	break;
	case 5: x_QWhatsThis::x_5(args);	break;
	case 6: x_QWhatsThis::x_6(args);	break;
	case 7: x_QWhatsThis::x_7(args);	break;
	case 8: x_QWhatsThis::x_8(args);	break;
	case 9: x_QWhatsThis::x_9(args);	break;
	case 10: x_QWhatsThis::x_10(args);	break;
	case 11: x_QWhatsThis::x_11(args);	break;
	case 12: x_QWhatsThis::x_12(args);	break;
	case 13: x_QWhatsThis::x_13(args);	break;
	case 14: x_QWhatsThis::x_14(args);	break;
	case 15: x_QWhatsThis::x_15(args);	break;
	case 16: x_QWhatsThis::x_16(args);	break;
	case 17: x_QWhatsThis::x_17(args);	break;
	case 18: x_QWhatsThis::x_18(args);	break;
	case 19: delete (QWhatsThis*)xself;	break;
    }
}
