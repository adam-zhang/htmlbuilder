/********************************************************************************
> FileName:	HtmlBuilder.cpp
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Sat Jun 26 13:09:26 2021
********************************************************************************/

#include "HtmlBuilder.h"
#include "HtmlTag.h"
#include <sstream>

HtmlBuilder::HtmlBuilder()
	: head_(std::make_shared<Head>())
	  , body_(std::make_shared<Body>())
{
}

HtmlBuilder::~HtmlBuilder()
{
}



std::string HtmlBuilder::toString()
{
	std::stringstream ss;
	ss << "<!DOCTYPE HTML>"
		<< "<html>"
		<< head_->toString()
		<< body_->toString()
		<< "</html>";
	return ss.str();
}

