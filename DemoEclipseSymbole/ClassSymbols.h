namespace Namespace{
class ClassForwardDeclaration;
class ClassWithWarning{
	virtual void VirtualMethod(){}
};
class ClassWithError{
	in Attribute;
};
class Class{
public:
enum Enum{ EnumCONSTANT};
	friend class FriendClass;

	Class const& PublicMethod();
	Class* ConstMethod() const;
	static double StaticMethod();
	constexpr int ConstExprMethod(){ return 42; }
	void* PublicAttribute;
	static const int ConstantAttribute;
	static constexpr int ConstExprAttribute=42;
protected:
	void ProtectedMethod();
	void* ProtectedAttribute;
	static int StaticAttribute;
private:
	void PrivateMethod();
	void* PrivateAttribute;
};
struct StructWithoutDefinition;
struct Struct{
	typedef int typedefMemberType;
};
} // end Namespace
