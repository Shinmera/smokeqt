//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qfileinfo.h>
#include <qstring.h>
#include <qfiledialog.h>

class x_QFileIconProvider : public QFileIconProvider {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QFileIconProvider::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QFileIconProvider::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QFileIconProvider::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QFileIconProvider::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QFileIconProvider::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QFileIconProvider::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QFileIconProvider::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QFileIconProvider(QObject*, const char*)
	x_QFileIconProvider* xret = new x_QFileIconProvider((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QFileIconProvider(QObject* x1, const char* x2) : QFileIconProvider(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QFileIconProvider(QObject*)
	x_QFileIconProvider* xret = new x_QFileIconProvider((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QFileIconProvider(QObject* x1) : QFileIconProvider(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QFileIconProvider()
	x_QFileIconProvider* xret = new x_QFileIconProvider();
	x[0].s_class = (void*)xret;
    }
    x_QFileIconProvider() : QFileIconProvider() {
    }
    void x_10(Smoke::Stack x) {
	// pixmap(const QFileInfo&)
	const QPixmap* xret = this->QFileIconProvider::pixmap(*(const QFileInfo *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_11(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QFileIconProvider::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_12(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QFileIconProvider::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_13(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QFileIconProvider::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_14(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QFileIconProvider::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_15(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QFileIconProvider::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
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
	if(qt_Smoke->binding->callMethod(3118, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QFileIconProvider::className();
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
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6480, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3117, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QFileIconProvider::metaObject();
    }
    virtual const QPixmap* pixmap(const QFileInfo& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3127, (void*)this, x)) return (const QPixmap*)x[0].s_class;
	return this->QFileIconProvider::pixmap(x1);
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
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(3119, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QFileIconProvider::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(3121, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFileIconProvider::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(3120, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFileIconProvider::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(3122, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QFileIconProvider::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6481, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6463, (void*)this, x)) return;
	this->QObject::setName(x1);
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
    ~x_QFileIconProvider() { qt_Smoke->binding->deleted(113, (void*)this); }
};
void xcall_QFileIconProvider(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFileIconProvider *xself = (x_QFileIconProvider*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QFileIconProvider::x_7(args);	break;
	case 8: x_QFileIconProvider::x_8(args);	break;
	case 9: x_QFileIconProvider::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: x_QFileIconProvider::x_11(args);	break;
	case 12: x_QFileIconProvider::x_12(args);	break;
	case 13: x_QFileIconProvider::x_13(args);	break;
	case 14: x_QFileIconProvider::x_14(args);	break;
	case 15: x_QFileIconProvider::x_15(args);	break;
	case 16: delete (QFileIconProvider*)xself;	break;
    }
}
