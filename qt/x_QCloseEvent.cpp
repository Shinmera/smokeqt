//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QCloseEvent : public QCloseEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QCloseEvent()
	x_QCloseEvent* xret = new x_QCloseEvent();
	x[0].s_class = (void*)xret;
    }
    x_QCloseEvent() : QCloseEvent() {
    }
    void x_1(Smoke::Stack x) const {
	// isAccepted()
	bool xret = this->QCloseEvent::isAccepted();
	x[0].s_bool = xret;
    }
    void x_2(Smoke::Stack x) {
	// accept()
	this->QCloseEvent::accept();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    void x_3(Smoke::Stack x) {
	// ignore()
	this->QCloseEvent::ignore();
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_4(Smoke::Stack x) {
	// QCloseEvent(const QCloseEvent&)
	x_QCloseEvent* xret = new x_QCloseEvent(*(const QCloseEvent *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCloseEvent(const QCloseEvent& x1) : QCloseEvent(x1) {
    }
    ~x_QCloseEvent() { qt_Smoke->binding->deleted(41, (void*)this); }
};
void xcall_QCloseEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCloseEvent *xself = (x_QCloseEvent*)obj;
    switch(xi) {
	case 0: x_QCloseEvent::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: x_QCloseEvent::x_4(args);	break;
	case 5: delete (QCloseEvent*)xself;	break;
    }
}
