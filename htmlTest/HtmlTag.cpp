/********************************************************************************
> FileName:	HtmlTag.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Sat Jun 26 13:09:43 2021
********************************************************************************/

#include "HtmlTag.h"
#include <sstream>

HtmlTag::HtmlTag(const std::string& name, const std::string& value)
	: name_(name)
	  , value_(value)
{
}

HtmlTag::~HtmlTag() {}

std::string HtmlTag::leftPart()
{
	std::stringstream ss;
	ss << "<" << name_;
	for(auto child : attributes_)
		ss << " " 
			<< child.first 
			<< "=\""
			<< child.second
			<< "\"";
	ss << ">";
	return ss.str();
}

std::string HtmlTag::middlePart()
{
	std::stringstream ss;
	ss << value_;
	return ss.str();
}

std::string HtmlTag::rightPart()
{
	std::stringstream ss;
	ss << "</"
		<< name_
		<< ">";
	return ss.str();
}

std::string HtmlTag::toString()
{
	std::stringstream ss;
	ss << leftPart()
		<< middlePart();
	for(auto child : children_)
		ss << child->toString();
	ss << rightPart();
	return ss.str();
}

Head::Head()
	: HtmlTag("head","")
{

}

Body::Body()
	: HtmlTag("body", "")
{

}

std::string Meta::toString()
{
	std::stringstream ss;
	ss << leftPart();
	return ss.str();
}
