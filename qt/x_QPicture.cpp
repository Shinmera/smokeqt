//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qpicture.h>
#include <qrect.h>

class x_QPicture : public QPicture {
public:
    static void x_0(Smoke::Stack x) {
	// QPicture(int)
	x_QPicture* xret = new x_QPicture((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QPicture(int x1) : QPicture(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QPicture()
	x_QPicture* xret = new x_QPicture();
	x[0].s_class = (void*)xret;
    }
    x_QPicture() : QPicture() {
    }
    static void x_2(Smoke::Stack x) {
	// QPicture(const QPicture&)
	x_QPicture* xret = new x_QPicture(*(const QPicture *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPicture(const QPicture& x1) : QPicture(x1) {
    }
    void x_3(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QPicture::isNull();
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) const {
	// size()
	uint xret = this->QPicture::size();
	x[0].s_uint = xret;
    }
    void x_5(Smoke::Stack x) const {
	// data()
	const char* xret = this->QPicture::data();
	x[0].s_voidp = (void*)xret;
    }
    void x_6(Smoke::Stack x) {
	// setData(const char*, uint)
	this->QPicture::setData((const char*)x[1].s_voidp,(uint)x[2].s_uint);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_7(Smoke::Stack x) {
	// play(QPainter*)
	bool xret = this->QPicture::play((QPainter*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_8(Smoke::Stack x) {
	// load(QIODevice*, const char*)
	bool xret = this->QPicture::load((QIODevice*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_9(Smoke::Stack x) {
	// load(QIODevice*)
	bool xret = this->QPicture::load((QIODevice*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_10(Smoke::Stack x) {
	// load(const QString&, const char*)
	bool xret = this->QPicture::load(*(const QString *)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_11(Smoke::Stack x) {
	// load(const QString&)
	bool xret = this->QPicture::load(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) {
	// save(QIODevice*, const char*)
	bool xret = this->QPicture::save((QIODevice*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) {
	// save(QIODevice*)
	bool xret = this->QPicture::save((QIODevice*)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// save(const QString&, const char*)
	bool xret = this->QPicture::save(*(const QString *)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// save(const QString&)
	bool xret = this->QPicture::save(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QPicture::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_17(Smoke::Stack x) {
	// operator=(const QPicture&)
	QPicture& xret = this->QPicture::operator=(*(const QPicture *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_18(Smoke::Stack x) {
	// cmd(int, QPainter*, QPDevCmdParam*)
	bool xret = this->QPicture::cmd((int)x[1].s_int,(QPainter*)x[2].s_class,(QPDevCmdParam*)x[3].s_voidp);
	x[0].s_bool = xret;
    }
    void x_19(Smoke::Stack x) const {
	// metric(int)
	int xret = this->QPicture::metric((int)x[1].s_int);
	x[0].s_int = xret;
    }
    void x_20(Smoke::Stack x) {
	// detach()
	this->QPicture::detach();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_21(Smoke::Stack x) const {
	// copy()
	QPicture xret = this->QPicture::copy();
	x[0].s_class = (void*)new QPicture(xret);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6943, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPicture::cmd(x1, x2, x3);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6644, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6641, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6944, (void*)this, x)) return (int)x[0].s_int;
	return this->QPicture::metric(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6637, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setData(const char* x1, uint x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_uint = x2;
	if(qt_Smoke->binding->callMethod(6931, (void*)this, x)) return;
	this->QPicture::setData(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6636, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    ~x_QPicture() { qt_Smoke->binding->deleted(226, (void*)this); }
};
void xcall_QPicture(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPicture *xself = (x_QPicture*)obj;
    switch(xi) {
	case 0: x_QPicture::x_0(args);	break;
	case 1: x_QPicture::x_1(args);	break;
	case 2: x_QPicture::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
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
	case 22: delete (QPicture*)xself;	break;
    }
}
