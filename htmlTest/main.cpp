#include <iostream>
#include "HtmlBuilder.h"
#include "HtmlTag.h"

using namespace std;

int main(int /*argc*/, char** /*argv*/)
{
	HtmlBuilder builder;
	auto p = std::make_shared<Meta>();
	p->addAttribute("charset", "utf-8");
	builder.head()->addChild(p);
	cout << builder.toString() << endl;
	return 0;
}
