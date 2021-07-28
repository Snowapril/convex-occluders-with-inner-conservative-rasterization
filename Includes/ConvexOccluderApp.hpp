#ifndef CONVEX_OCCLUDER_APP_HPP
#define CONVEX_OCCLUDER_APP_HPP

#include <GL3/Application.hpp>

class ConvexOccluderApp : public GL3::Application
{
public:
	//! Default constructor
	ConvexOccluderApp();
	//! Default desctrutor
	~ConvexOccluderApp();
	//! Returns overrided Application title
	const char* GetAppTitle() const override
	{
		return "Convex Occluders with Inner Conservative Rasterization";
	}
protected:
	bool OnInitialize(std::shared_ptr<GL3::Window> window, const cxxopts::ParseResult& configure) override;
	void OnCleanUp() override;
	void OnUpdate(double dt) override;
	void OnDraw() override;
	void OnProcessInput(unsigned int key) override;
	void OnProcessResize(int width, int height) override;

private:
};

#endif //! end of ConvexOccluderApp.hpp