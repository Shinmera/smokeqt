//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qevent.h>

class x_QShowEvent : public QShowEvent {
public:
    static void x_0(Smoke::Stack x) {
	// QShowEvent()
	x_QShowEvent* xret = new x_QShowEvent();
	x[0].s_class = (void*)xret;
    }
    x_QShowEvent() : QShowEvent() {
    }
    static void x_1(Smoke::Stack x) {
	// QShowEvent(const QShowEvent&)
	x_QShowEvent* xret = new x_QShowEvent(*(const QShowEvent *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QShowEvent(const QShowEvent& x1) : QShowEvent(x1) {
    }
    ~x_QShowEvent() { qt_Smoke->binding->deleted(258, (void*)this); }
};
void xcall_QShowEvent(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QShowEvent *xself = (x_QShowEvent*)obj;
    switch(xi) {
	case 0: x_QShowEvent::x_0(args);	break;
	case 1: x_QShowEvent::x_1(args);	break;
	case 2: delete (QShowEvent*)xself;	break;
    }
}
