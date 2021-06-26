/********************************************************************************
> FileName:	HtmlTag.h
> Author:	Mingping Zhang
> Email:	mingpingzhang@163.com
> Create Time:	Sat Jun 26 13:09:43 2021
********************************************************************************/
#ifndef HTMLTAG_H
#define HTMLTAG_H

#include <vector>
#include <string>
#include <memory>




class HtmlTag
{
public:
	HtmlTag(const std::string&, const std::string& value);
	~HtmlTag();
public:
private:
	std::string name_;
	std::string value_;
	std::vector<std::pair<std::string, std::string>> attributes_;
	std::vector<std::shared_ptr<HtmlTag>> children_;
protected:
	std::string leftPart();
private:
	std::string middlePart();
	std::string rightPart();
public:
	virtual std::string toString() ;
	void addAttribute(const std::string key, const std::string& value)
	{
		attributes_.emplace_back(std::make_pair(key, value));
	}
	virtual void addChild(const std::shared_ptr<HtmlTag>& child)
	{ children_.emplace_back(child); }
};

class Head : public HtmlTag
{
	public:
		Head();
};

class Body : public HtmlTag
{
	public:
		Body();
};

class Meta : public HtmlTag
{
	public:
		Meta()
			:HtmlTag("meta", "")
		{

		}
		~Meta(){}
	public:
		std::string toString()override;
};

class Title : public HtmlTag
{
	public:
		Title() :
			HtmlTag("title", "Hello")
	{}
};
#endif//HTMLTAG_H
