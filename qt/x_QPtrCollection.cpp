//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qptrcollection.h>

class x_QPtrCollection : public QPtrCollection {
public:
    void x_0(Smoke::Stack x) const {
	// autoDelete()
	bool xret = this->QPtrCollection::autoDelete();
	x[0].s_bool = xret;
    }
    void x_1(Smoke::Stack x) {
	// setAutoDelete(bool)
	this->QPtrCollection::setAutoDelete((bool)x[1].s_bool);
	(void)x[0].s_int; // noop (for compiler warning)
    }
    static void x_2(Smoke::Stack x) {
	// QPtrCollection()
	x_QPtrCollection* xret = new x_QPtrCollection();
	x[0].s_class = (void*)xret;
    }
    x_QPtrCollection() : QPtrCollection() {
    }
    static void x_3(Smoke::Stack x) {
	// QPtrCollection(const QPtrCollection&)
	x_QPtrCollection* xret = new x_QPtrCollection(*(const QPtrCollection *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPtrCollection(const QPtrCollection& x1) : QPtrCollection(x1) {
    }
    void x_4(Smoke::Stack x) {
	// newItem(Item)
	Item xret = this->QPtrCollection::newItem(*(Item *)x[1].s_voidp);
	x[0].s_voidp = (void*)new Item(xret);
    }
    virtual void clear() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(7481, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual uint count() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(7480, (void*)this, x, true /*pure virtual*/);
	return (uint)x[0].s_uint;
	// ABSTRACT
    }
    virtual void deleteItem(Item x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(7485, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual Item newItem(Item x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7484, (void*)this, x)) {
	    Item *xptr = (Item *)x[0].s_class;
	    Item xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QPtrCollection::newItem(x1);
    }
    ~x_QPtrCollection() { qt_Smoke->binding->deleted(240, (void*)this); }
};
void xcall_QPtrCollection(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPtrCollection *xself = (x_QPtrCollection*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: x_QPtrCollection::x_2(args);	break;
	case 3: x_QPtrCollection::x_3(args);	break;
	case 4: xself->x_4(args);	break;
    }
}
