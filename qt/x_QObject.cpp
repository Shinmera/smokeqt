//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qcstring.h>
#include <qstring.h>
#include <qobject.h>

class x_QObject : public QObject {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QObject::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QObject::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QObject::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QObject::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QObject::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QObject::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QObject::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QObject(QObject*, const char*)
	x_QObject* xret = new x_QObject((QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QObject(QObject* x1, const char* x2) : QObject(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QObject(QObject*)
	x_QObject* xret = new x_QObject((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QObject(QObject* x1) : QObject(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QObject()
	x_QObject* xret = new x_QObject();
	x[0].s_class = (void*)xret;
    }
    x_QObject() : QObject() {
    }
    void x_10(Smoke::Stack x) const {
	// className()
	const char* xret = this->QObject::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_11(Smoke::Stack x) const {
	// tr(const char*, const char*)
	QString xret = this->QObject::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_12(Smoke::Stack x) const {
	// trUtf8(const char*, const char*)
	QString xret = this->QObject::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QObject::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_14(Smoke::Stack x) {
	// event(QEvent*)
	bool xret = this->QObject::event((QEvent*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QObject::eventFilter((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) const {
	// isA(const char*)
	bool xret = this->QObject::isA((const char*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) const {
	// inherits(const char*)
	bool xret = this->QObject::inherits((const char*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_18(Smoke::Stack x) const {
	// name()
	const char* xret = this->QObject::name();
	x[0].s_voidp = (void*)xret;
    }
    void x_19(Smoke::Stack x) const {
	// name(const char*)
	const char* xret = this->QObject::name((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_20(Smoke::Stack x) {
	// setName(const char*)
	this->QObject::setName((const char*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// isWidgetType()
	bool xret = this->QObject::isWidgetType();
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) const {
	// highPriority()
	bool xret = this->QObject::highPriority();
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) const {
	// signalsBlocked()
	bool xret = this->QObject::signalsBlocked();
	x[0].s_bool = xret;
    }
    void x_24(Smoke::Stack x) {
	// blockSignals(bool)
	this->QObject::blockSignals((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// startTimer(int)
	int xret = this->QObject::startTimer((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_26(Smoke::Stack x) {
	// killTimer(int)
	this->QObject::killTimer((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_27(Smoke::Stack x) {
	// killTimers()
	this->QObject::killTimers();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_28(Smoke::Stack x) {
	// child(const char*, const char*, bool)
	QObject* xret = this->QObject::child((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    void x_29(Smoke::Stack x) {
	// child(const char*, const char*)
	QObject* xret = this->QObject::child((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_30(Smoke::Stack x) {
	// child(const char*)
	QObject* xret = this->QObject::child((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_31(Smoke::Stack x) const {
	// children()
	const QObjectList* xret = this->QObject::children();
	x[0].s_class = (void*)xret;
    }
    void x_32(Smoke::Stack x) const {
	// queryList(const char*, const char*, bool, bool)
	QObjectList* xret = this->QObject::queryList((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(bool)x[3].s_bool,(bool)x[4].s_bool);
	x[0].s_class = (void*)xret;
    }
    void x_33(Smoke::Stack x) const {
	// queryList(const char*, const char*, bool)
	QObjectList* xret = this->QObject::queryList((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    void x_34(Smoke::Stack x) const {
	// queryList(const char*, const char*)
	QObjectList* xret = this->QObject::queryList((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_35(Smoke::Stack x) const {
	// queryList(const char*)
	QObjectList* xret = this->QObject::queryList((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_36(Smoke::Stack x) const {
	// queryList()
	QObjectList* xret = this->QObject::queryList();
	x[0].s_class = (void*)xret;
    }
    void x_37(Smoke::Stack x) {
	// insertChild(QObject*)
	this->QObject::insertChild((QObject*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) {
	// removeChild(QObject*)
	this->QObject::removeChild((QObject*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_39(Smoke::Stack x) {
	// installEventFilter(const QObject*)
	this->QObject::installEventFilter((const QObject*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// removeEventFilter(const QObject*)
	this->QObject::removeEventFilter((const QObject*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) const {
	// connect(const QObject*, const char*, const char*)
	bool xret = this->QObject::connect((const QObject*)x[1].s_class,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_42(Smoke::Stack x) {
	// disconnect(const char*, const QObject*, const char*)
	bool xret = this->QObject::disconnect((const char*)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_43(Smoke::Stack x) {
	// disconnect(const char*, const QObject*)
	bool xret = this->QObject::disconnect((const char*)x[1].s_voidp,(const QObject*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_44(Smoke::Stack x) {
	// disconnect(const char*)
	bool xret = this->QObject::disconnect((const char*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_45(Smoke::Stack x) {
	// disconnect()
	bool xret = this->QObject::disconnect();
	x[0].s_bool = xret;
    }
    void x_46(Smoke::Stack x) {
	// disconnect(const QObject*, const char*)
	bool xret = this->QObject::disconnect((const QObject*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_47(Smoke::Stack x) {
	// disconnect(const QObject*)
	bool xret = this->QObject::disconnect((const QObject*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_48(Smoke::Stack x) {
	// dumpObjectTree()
	this->QObject::dumpObjectTree();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// dumpObjectInfo()
	this->QObject::dumpObjectInfo();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// setProperty(const char*, const QVariant&)
	bool xret = this->QObject::setProperty((const char*)x[1].s_voidp,*(const QVariant *)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_51(Smoke::Stack x) const {
	// property(const char*)
	QVariant xret = this->QObject::property((const char*)x[1].s_voidp);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_52(Smoke::Stack x) const {
	// parent()
	QObject* xret = this->QObject::parent();
	x[0].s_class = (void*)xret;
    }
    void x_53(Smoke::Stack x) {
	// deleteLater()
	this->QObject::deleteLater();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_54(Smoke::Stack x) {
	// destroyed()
	this->QObject::destroyed();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_55(Smoke::Stack x) {
	// destroyed(QObject*)
	this->QObject::destroyed((QObject*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_56(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QObject::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_57(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QObject::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_58(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QObject::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_59(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QObject::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_60(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QObject::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_61(Smoke::Stack x) {
	// objectTrees()
	const QObjectList* xret = QObject::objectTrees();
	x[0].s_class = (void*)xret;
    }
    static void x_62(Smoke::Stack x) {
	// connect(const QObject*, const char*, const QObject*, const char*)
	bool xret = QObject::connect((const QObject*)x[1].s_class,(const char*)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_63(Smoke::Stack x) {
	// disconnect(const QObject*, const char*, const QObject*, const char*)
	bool xret = QObject::disconnect((const QObject*)x[1].s_class,(const char*)x[2].s_voidp,(const QObject*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_64(Smoke::Stack x) {
	// connectInternal(const QObject*, int, const QObject*, int, int)
	QObject::connectInternal((const QObject*)x[1].s_class,(int)x[2].s_int,(const QObject*)x[3].s_class,(int)x[4].s_int,(int)x[5].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_65(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QObject::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_66(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QObject::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_67(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QObject::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_68(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QObject::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_69(Smoke::Stack x) {
	// activate_filters(QEvent*)
	bool xret = this->QObject::activate_filters((QEvent*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_70(Smoke::Stack x) const {
	// receivers(const char*)
	QConnectionList* xret = this->QObject::receivers((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    void x_71(Smoke::Stack x) const {
	// receivers(int)
	QConnectionList* xret = this->QObject::receivers((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_72(Smoke::Stack x) {
	// activate_signal(int)
	this->QObject::activate_signal((int)x[1].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_73(Smoke::Stack x) {
	// activate_signal(int, int)
	this->QObject::activate_signal((int)x[1].s_int,(int)x[2].s_int);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_74(Smoke::Stack x) {
	// activate_signal(int, double)
	this->QObject::activate_signal((int)x[1].s_int,(double)x[2].s_double);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_75(Smoke::Stack x) {
	// activate_signal(int, QString)
	this->QObject::activate_signal((int)x[1].s_int,*(QString *)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_76(Smoke::Stack x) {
	// activate_signal_bool(int, bool)
	this->QObject::activate_signal_bool((int)x[1].s_int,(bool)x[2].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_77(Smoke::Stack x) {
	// activate_signal(QConnectionList*, QUObject*)
	this->QObject::activate_signal((QConnectionList*)x[1].s_class,(QUObject*)x[2].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_78(Smoke::Stack x) {
	// sender()
	const QObject* xret = this->QObject::sender();
	x[0].s_class = (void*)xret;
    }
    void x_79(Smoke::Stack x) {
	// timerEvent(QTimerEvent*)
	this->QObject::timerEvent((QTimerEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_80(Smoke::Stack x) {
	// childEvent(QChildEvent*)
	this->QObject::childEvent((QChildEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_81(Smoke::Stack x) {
	// customEvent(QCustomEvent*)
	this->QObject::customEvent((QCustomEvent*)x[1].s_class);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_82(Smoke::Stack x) {
	// connectNotify(const char*)
	this->QObject::connectNotify((const char*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_83(Smoke::Stack x) {
	// disconnectNotify(const char*)
	this->QObject::disconnectNotify((const char*)x[1].s_voidp);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_84(Smoke::Stack x) {
	// checkConnectArgs(const char*, const QObject*, const char*)
	bool xret = this->QObject::checkConnectArgs((const char*)x[1].s_voidp,(const QObject*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    static void x_85(Smoke::Stack x) {
	// normalizeSignalSlot(const char*)
	QCString xret = QObject::normalizeSignalSlot((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
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
	if(qt_Smoke->binding->callMethod(6453, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QObject::className();
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
	if(qt_Smoke->binding->callMethod(6456, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QObject::metaObject();
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
	if(qt_Smoke->binding->callMethod(6444, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QObject::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(6446, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(6445, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(6447, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::qt_property(x1, x2, x3);
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
    ~x_QObject() { qt_Smoke->binding->deleted(213, (void*)this); }
};
void xcall_QObject(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QObject *xself = (x_QObject*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QObject::x_7(args);	break;
	case 8: x_QObject::x_8(args);	break;
	case 9: x_QObject::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: x_QObject::x_56(args);	break;
	case 57: x_QObject::x_57(args);	break;
	case 58: x_QObject::x_58(args);	break;
	case 59: x_QObject::x_59(args);	break;
	case 60: x_QObject::x_60(args);	break;
	case 61: x_QObject::x_61(args);	break;
	case 62: x_QObject::x_62(args);	break;
	case 63: x_QObject::x_63(args);	break;
	case 64: x_QObject::x_64(args);	break;
	case 65: x_QObject::x_65(args);	break;
	case 66: x_QObject::x_66(args);	break;
	case 67: x_QObject::x_67(args);	break;
	case 68: x_QObject::x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: xself->x_83(args);	break;
	case 84: xself->x_84(args);	break;
	case 85: x_QObject::x_85(args);	break;
	case 86: delete (QObject*)xself;	break;
    }
}
