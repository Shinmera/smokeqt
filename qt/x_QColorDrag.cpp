//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qvariant.h>
#include <qcolor.h>
#include <qcstring.h>
#include <qstring.h>
#include <qdragobject.h>
#include <qpixmap.h>

class x_QColorDrag : public QColorDrag {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QColorDrag::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QColorDrag::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QColorDrag::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QColorDrag::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QColorDrag::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QColorDrag::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QColorDrag::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QColorDrag(const QColor&, QWidget*, const char*)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1, QWidget* x2, const char* x3) : QColorDrag(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QColorDrag(const QColor&, QWidget*)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1, QWidget* x2) : QColorDrag(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QColorDrag(const QColor&)
	x_QColorDrag* xret = new x_QColorDrag(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(const QColor& x1) : QColorDrag(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QColorDrag(QWidget*, const char*)
	x_QColorDrag* xret = new x_QColorDrag((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(QWidget* x1, const char* x2) : QColorDrag(x1, x2) {
    }
    static void x_11(Smoke::Stack x) {
	// QColorDrag(QWidget*)
	x_QColorDrag* xret = new x_QColorDrag((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag(QWidget* x1) : QColorDrag(x1) {
    }
    static void x_12(Smoke::Stack x) {
	// QColorDrag()
	x_QColorDrag* xret = new x_QColorDrag();
	x[0].s_class = (void*)xret;
    }
    x_QColorDrag() : QColorDrag() {
    }
    void x_13(Smoke::Stack x) {
	// setColor(const QColor&)
	this->QColorDrag::setColor(*(const QColor *)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_14(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QColorDrag::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_15(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QColorDrag::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_16(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QColorDrag::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_17(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QColorDrag::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_18(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QColorDrag::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_19(Smoke::Stack x) {
	// canDecode(QMimeSource*)
	bool xret = QColorDrag::canDecode((QMimeSource*)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void x_20(Smoke::Stack x) {
	// decode(QMimeSource*, QColor&)
	bool xret = QColorDrag::decode((QMimeSource*)x[1].s_class,*(QColor *)x[2].s_class);
	x[0].s_bool = xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6527, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6523, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1219, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QColorDrag::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6525, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6524, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6526, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool drag(QDragObject::DragMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(2826, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDragObject::drag(x1);
    }
    virtual QByteArray encodedData(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(9167, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStoredDrag::encodedData(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6457, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6458, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual const char* format(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(9166, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStoredDrag::format(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6480, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1218, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QColorDrag::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6494, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual bool provides(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6090, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QMimeSource::provides(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(1220, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QColorDrag::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(1222, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QColorDrag::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(1221, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QColorDrag::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(1223, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QColorDrag::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6481, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setEncodedData(const QByteArray& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(9165, (void*)this, x)) return;
	this->QStoredDrag::setEncodedData(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6463, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPixmap(QPixmap x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2814, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1);
    }
    virtual void setPixmap(QPixmap x1, const QPoint& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2815, (void*)this, x)) return;
	this->QDragObject::setPixmap(x1, x2);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6493, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6522, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QColorDrag() { qt_Smoke->binding->deleted(44, (void*)this); }
};
void xcall_QColorDrag(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QColorDrag *xself = (x_QColorDrag*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QColorDrag::x_7(args);	break;
	case 8: x_QColorDrag::x_8(args);	break;
	case 9: x_QColorDrag::x_9(args);	break;
	case 10: x_QColorDrag::x_10(args);	break;
	case 11: x_QColorDrag::x_11(args);	break;
	case 12: x_QColorDrag::x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: x_QColorDrag::x_14(args);	break;
	case 15: x_QColorDrag::x_15(args);	break;
	case 16: x_QColorDrag::x_16(args);	break;
	case 17: x_QColorDrag::x_17(args);	break;
	case 18: x_QColorDrag::x_18(args);	break;
	case 19: x_QColorDrag::x_19(args);	break;
	case 20: x_QColorDrag::x_20(args);	break;
	case 21: delete (QColorDrag*)xself;	break;
    }
}
