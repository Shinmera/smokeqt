//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qdom.h>

class x_QDomDocumentFragment : public QDomDocumentFragment {
public:
    static void x_0(Smoke::Stack x) {
	// QDomDocumentFragment()
	x_QDomDocumentFragment* xret = new x_QDomDocumentFragment();
	x[0].s_class = (void*)xret;
    }
    x_QDomDocumentFragment() : QDomDocumentFragment() {
    }
    static void x_1(Smoke::Stack x) {
	// QDomDocumentFragment(const QDomDocumentFragment&)
	x_QDomDocumentFragment* xret = new x_QDomDocumentFragment(*(const QDomDocumentFragment *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDomDocumentFragment(const QDomDocumentFragment& x1) : QDomDocumentFragment(x1) {
    }
    void x_2(Smoke::Stack x) {
	// operator=(const QDomDocumentFragment&)
	QDomDocumentFragment& xret = this->QDomDocumentFragment::operator=(*(const QDomDocumentFragment *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_3(Smoke::Stack x) const {
	// nodeType()
	QDomNode::NodeType xret = this->QDomDocumentFragment::nodeType();
	x[0].s_enum = xret;
    }
    void x_4(Smoke::Stack x) const {
	// isDocumentFragment()
	bool xret = this->QDomDocumentFragment::isDocumentFragment();
	x[0].s_bool = xret;
    }
    virtual QDomNode appendChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2653, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::appendChild(x1);
    }
    virtual QDomNamedNodeMap attributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2667, (void*)this, x)) {
	    QDomNamedNodeMap *xptr = (QDomNamedNodeMap *)x[0].s_class;
	    QDomNamedNodeMap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::attributes();
    }
    virtual QDomNodeList childNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2662, (void*)this, x)) {
	    QDomNodeList *xptr = (QDomNodeList *)x[0].s_class;
	    QDomNodeList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::childNodes();
    }
    virtual QDomNode cloneNode(bool x1) const {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(2655, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::cloneNode(x1);
    }
    virtual QDomNode firstChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2663, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::firstChild();
    }
    virtual bool hasAttributes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2671, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasAttributes();
    }
    virtual bool hasChildNodes() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2654, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::hasChildNodes();
    }
    virtual QDomNode insertAfter(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2650, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertAfter(x1, x2);
    }
    virtual QDomNode insertBefore(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2649, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::insertBefore(x1, x2);
    }
    virtual bool isAttr() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2676, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isAttr();
    }
    virtual bool isCDATASection() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2677, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCDATASection();
    }
    virtual bool isCharacterData() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2687, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isCharacterData();
    }
    virtual bool isComment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2688, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isComment();
    }
    virtual bool isDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2679, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocument();
    }
    virtual bool isDocumentFragment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2543, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomDocumentFragment::isDocumentFragment();
    }
    virtual bool isDocumentType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2680, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isDocumentType();
    }
    virtual bool isElement() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2681, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isElement();
    }
    virtual bool isEntity() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2684, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntity();
    }
    virtual bool isEntityReference() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2682, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isEntityReference();
    }
    virtual bool isNotation() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2685, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isNotation();
    }
    virtual bool isProcessingInstruction() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2686, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isProcessingInstruction();
    }
    virtual bool isSupported(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2658, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isSupported(x1, x2);
    }
    virtual bool isText() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2683, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QDomNode::isText();
    }
    virtual QDomNode lastChild() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2664, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::lastChild();
    }
    virtual QString localName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2670, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::localName();
    }
    virtual QString namespaceURI() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2669, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::namespaceURI();
    }
    virtual QDomNode nextSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2666, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nextSibling();
    }
    virtual QString nodeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2659, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeName();
    }
    virtual QDomNode::NodeType nodeType() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2542, (void*)this, x)) {
	    QDomNode::NodeType *xptr = (QDomNode::NodeType *)x[0].s_class;
	    QDomNode::NodeType xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomDocumentFragment::nodeType();
    }
    virtual QString nodeValue() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2672, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::nodeValue();
    }
    virtual void normalize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2657, (void*)this, x)) return;
	this->QDomNode::normalize();
    }
    virtual QDomDocument ownerDocument() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2668, (void*)this, x)) {
	    QDomDocument *xptr = (QDomDocument *)x[0].s_class;
	    QDomDocument xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::ownerDocument();
    }
    virtual QDomNode parentNode() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2661, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::parentNode();
    }
    virtual QString prefix() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2674, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::prefix();
    }
    virtual QDomNode previousSibling() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(2665, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::previousSibling();
    }
    virtual QDomNode removeChild(const QDomNode& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2652, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::removeChild(x1);
    }
    virtual QDomNode replaceChild(const QDomNode& x1, const QDomNode& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(2651, (void*)this, x)) {
	    QDomNode *xptr = (QDomNode *)x[0].s_class;
	    QDomNode xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDomNode::replaceChild(x1, x2);
    }
    virtual void setNodeValue(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2673, (void*)this, x)) return;
	this->QDomNode::setNodeValue(x1);
    }
    virtual void setPrefix(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(2675, (void*)this, x)) return;
	this->QDomNode::setPrefix(x1);
    }
    ~x_QDomDocumentFragment() { qt_Smoke->binding->deleted(85, (void*)this); }
};
void xcall_QDomDocumentFragment(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDomDocumentFragment *xself = (x_QDomDocumentFragment*)obj;
    switch(xi) {
	case 0: x_QDomDocumentFragment::x_0(args);	break;
	case 1: x_QDomDocumentFragment::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: delete (QDomDocumentFragment*)xself;	break;
    }
}
