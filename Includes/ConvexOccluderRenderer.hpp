#ifndef CONVEX_OCCLUDER_RENDERER_HPP
#define CONVEX_OCCLUDER_RENDERER_HPP

#include <GL3/Renderer.hpp>

class ConvexOccluderRenderer : public GL3::Renderer
{
public:
	//! Default constructor
	ConvexOccluderRenderer();
	//! Default desctrutor
	~ConvexOccluderRenderer();
protected:
	bool OnInitialize(const cxxopts::ParseResult& configure) override;
	void OnCleanUp() override;
	void OnUpdateFrame(double dt) override;
	void OnBeginDraw() override;
	void OnEndDraw() override;
	void OnProcessInput(unsigned int key) override;
	void OnProcessResize(int width, int height) override;
};

#endif //! end of ConvexOccluderRenderer.hpp