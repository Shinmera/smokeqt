//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QWidgetItem : public QWidgetItem {
public:
    static void x_0(Smoke::Stack x) {
	// QWidgetItem(QWidget*)
	x_QWidgetItem* xret = new x_QWidgetItem((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWidgetItem(QWidget* x1) : QWidgetItem(x1) {
    }
    void x_1(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QWidgetItem::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_2(Smoke::Stack x) const {
	// minimumSize()
	QSize xret = this->QWidgetItem::minimumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_3(Smoke::Stack x) const {
	// maximumSize()
	QSize xret = this->QWidgetItem::maximumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_4(Smoke::Stack x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QWidgetItem::expanding();
	x[0].s_enum = xret;
    }
    void x_5(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QWidgetItem::isEmpty();
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// setGeometry(const QRect&)
	this->QWidgetItem::setGeometry(*(const QRect *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) const {
	// geometry()
	QRect xret = this->QWidgetItem::geometry();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_8(Smoke::Stack x) {
	// widget()
	QWidget* xret = this->QWidgetItem::widget();
	x[0].s_class = (void*)xret;
    }
    void x_9(Smoke::Stack x) const {
	// hasHeightForWidth()
	bool xret = this->QWidgetItem::hasHeightForWidth();
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) const {
	// heightForWidth(int)
	int xret = this->QWidgetItem::heightForWidth((int)x[1].s_int);
	x[0].s_int = xret;
    }
    static void x_11(Smoke::Stack x) {
	// QWidgetItem(const QWidgetItem&)
	x_QWidgetItem* xret = new x_QWidgetItem(*(const QWidgetItem *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QWidgetItem(const QWidgetItem& x1) : QWidgetItem(x1) {
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11707, (void*)this, x)) {
	    QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	    QSizePolicy::ExpandData xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetItem::expanding();
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11710, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetItem::geometry();
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11712, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetItem::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11713, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidgetItem::heightForWidth(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4990, (void*)this, x)) return;
	this->QLayoutItem::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11708, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidgetItem::isEmpty();
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4992, (void*)this, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayoutItem::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4993, (void*)this, x)) return (QLayout*)x[0].s_class;
	return this->QLayoutItem::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11706, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetItem::maximumSize();
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11705, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetItem::minimumSize();
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(4996, (void*)this, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11709, (void*)this, x)) return;
	this->QWidgetItem::setGeometry(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11704, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidgetItem::sizeHint();
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(4994, (void*)this, x)) return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11711, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QWidgetItem::widget();
    }
    ~x_QWidgetItem() { qt_Smoke->binding->deleted(363, (void*)this); }
};
void xcall_QWidgetItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QWidgetItem *xself = (x_QWidgetItem*)obj;
    switch(xi) {
	case 0: x_QWidgetItem::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: x_QWidgetItem::x_11(args);	break;
	case 12: delete (QWidgetItem*)xself;	break;
    }
}
