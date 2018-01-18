#define Makro
#ifdef Makro
#include "IncludeNotFound.h"
#include "Include.h"
#else
#include "InactiveInclude.h"
#define InactiveMacro
#endif

using namespace UsingDirective;
using UsingDirective::UsingDeclaration;

void globalFunctionDeklaration();
void globalFunctionDefinition(){}
constexpr int constexprFunction(){ return 42;}
static void localFunctionDeklaration();
static void localFunctionDefinition(){}


int GlobalObject;
const int GLOBALCONST = 42;
constexpr int GLOBALCONSTEXPR = 42;

template<class T>
class Template{
public:
	using usingMemberType=T; //C++11
	typedef T typedefMemberType;
	template<class X>
	void TemplateMethod(X const& x);
	template<class X>
	static void StaticTemplateMethod(X const& x);
	template<class X>
		struct InnerTemplate{
			X PublicMethod();
			X Attribute;
		};
};
