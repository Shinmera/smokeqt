//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qlistbox.h>

class x_QListBoxText : public QListBoxText {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_class = (void*)new int(QListBoxText::RTTI);
    }
    static void x_1(Smoke::Stack x) {
	// QListBoxText(QListBox*, const QString&)
	x_QListBoxText* xret = new x_QListBoxText((QListBox*)x[1].s_class,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxText(QListBox* x1, const QString& x2) : QListBoxText(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QListBoxText(QListBox*)
	x_QListBoxText* xret = new x_QListBoxText((QListBox*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxText(QListBox* x1) : QListBoxText(x1) {
    }
    static void x_3(Smoke::Stack x) {
	// QListBoxText(const QString&)
	x_QListBoxText* xret = new x_QListBoxText(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxText(const QString& x1) : QListBoxText(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QListBoxText()
	x_QListBoxText* xret = new x_QListBoxText();
	x[0].s_class = (void*)xret;
    }
    x_QListBoxText() : QListBoxText() {
    }
    static void x_5(Smoke::Stack x) {
	// QListBoxText(QListBox*, const QString&, QListBoxItem*)
	x_QListBoxText* xret = new x_QListBoxText((QListBox*)x[1].s_class,*(const QString *)x[2].s_voidp,(QListBoxItem*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxText(QListBox* x1, const QString& x2, QListBoxItem* x3) : QListBoxText(x1, x2, x3) {
    }
    void x_6(Smoke::Stack x) const {
	// height(const QListBox*)
	int xret = this->QListBoxText::height((const QListBox*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_7(Smoke::Stack x) const {
	// width(const QListBox*)
	int xret = this->QListBoxText::width((const QListBox*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_8(Smoke::Stack x) const {
	// rtti()
	int xret = this->QListBoxText::rtti();
	x[0].s_int = xret;
    }
    void x_9(Smoke::Stack x) {
	// paint(QPainter*)
	this->QListBoxText::paint((QPainter*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    virtual int height(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5335, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxText::height(x1);
    }
    virtual void paint(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5339, (void*)this, x)) return;
	this->QListBoxText::paint(x1);
    }
    virtual const QPixmap* pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5299, (void*)this, x)) return (const QPixmap*)x[0].s_class;
	return this->QListBoxItem::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5337, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxText::rtti();
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(5314, (void*)this, x)) return;
	this->QListBoxItem::setText(x1);
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(5298, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QListBoxItem::text();
    }
    virtual int width(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(5336, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxText::width(x1);
    }
    ~x_QListBoxText() { qt_Smoke->binding->deleted(184, (void*)this); }
};
void xcall_QListBoxText(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QListBoxText *xself = (x_QListBoxText*)obj;
    switch(xi) {
	case 0: x_QListBoxText::x_0(args);	break;
	case 1: x_QListBoxText::x_1(args);	break;
	case 2: x_QListBoxText::x_2(args);	break;
	case 3: x_QListBoxText::x_3(args);	break;
	case 4: x_QListBoxText::x_4(args);	break;
	case 5: x_QListBoxText::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: delete (QListBoxText*)xself;	break;
    }
}
