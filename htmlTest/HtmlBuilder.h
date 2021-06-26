/********************************************************************************
> FileName:	HtmlBuilder.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Sat Jun 26 13:09:26 2021
********************************************************************************/
#ifndef HTMLBUILDER_H
#define HTMLBUILDER_H

#include <memory>

class HtmlTag;

class HtmlBuilder
{
public:
	HtmlBuilder();
	~HtmlBuilder();
public:
	void addHead(const std::shared_ptr<HtmlTag>& head);
	void addBody(const std::shared_ptr<HtmlTag>& body);
	std::shared_ptr<HtmlTag> head()
	{ return head_;}
	std::shared_ptr<HtmlTag> body()
	{ return body_; }
private:
	std::shared_ptr<HtmlTag> head_;
	std::shared_ptr<HtmlTag> body_;
public:
	std::string toString() ;
};

#endif//HTMLBUILDER_H
