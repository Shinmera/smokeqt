//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvfbhdr.h>

class x_QVFbKeyData : public QVFbKeyData {
public:
    static void x_0(Smoke::Stack x) {
	// QVFbKeyData()
	x_QVFbKeyData* xret = new x_QVFbKeyData();
	x[0].s_class = (void*)xret;
    }
    x_QVFbKeyData() : QVFbKeyData() {
    }
    static void x_1(Smoke::Stack x) {
	// QVFbKeyData(const QVFbKeyData&)
	x_QVFbKeyData* xret = new x_QVFbKeyData(*(const QVFbKeyData *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVFbKeyData(const QVFbKeyData& x1) : QVFbKeyData(x1) {
    }
    ~x_QVFbKeyData() { qt_Smoke->binding->deleted(352, (void*)this); }
};
void xcall_QVFbKeyData(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QVFbKeyData *xself = (x_QVFbKeyData*)obj;
    switch(xi) {
	case 0: x_QVFbKeyData::x_0(args);	break;
	case 1: x_QVFbKeyData::x_1(args);	break;
	case 2: delete (QVFbKeyData*)xself;	break;
    }
}
