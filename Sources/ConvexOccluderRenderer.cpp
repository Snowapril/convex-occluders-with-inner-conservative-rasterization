#include <ConvexOccluderRenderer.hpp>
#include <ConvexOccluderApp.hpp>

ConvexOccluderRenderer::ConvexOccluderRenderer()
{
	//! Do nothing
}

ConvexOccluderRenderer::~ConvexOccluderRenderer()
{
	//! Do nothing
}

bool ConvexOccluderRenderer::OnInitialize(const cxxopts::ParseResult& configure)
{
	if (!AddApplication(std::make_shared<ConvexOccluderApp>(), configure))
		return false;
	return true;
}

void ConvexOccluderRenderer::OnCleanUp()
{
	//! Do nothing
}

void ConvexOccluderRenderer::OnUpdateFrame(double dt)
{
	(void)dt;
}

void ConvexOccluderRenderer::OnBeginDraw()
{
	//! Do nothing
}

void ConvexOccluderRenderer::OnEndDraw()
{
	//! Do nothing
}

void ConvexOccluderRenderer::OnProcessInput(unsigned int key)
{
	(void)key;
}

void ConvexOccluderRenderer::OnProcessResize(int width, int height)
{
	(void)width; (void)height;
}