// Adapter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

class GooglePlugin
{
public:
    virtual void Init(int UUID) = 0;
    virtual void DoSomething() = 0;
};

class GoogleAdsPlugin : public GooglePlugin
{
public:
    GoogleAdsPlugin() {}
public:
    virtual void Init(int UUID) override
    {
        std::cout << "Google Ads Init: " << UUID << std::endl;
    }
    virtual void DoSomething() override
    {
        std::cout << "Google Ads DoSomething" << std::endl;
    }
};

class FacebookAdsPlugin
{
public:
    void InitFacebook(int UUID)
    {
        std::cout << "Facebook Ads Init: " << UUID << std::endl;
    }
    void ShowAds()
    {
        std::cout << "Facebook Show Ads" << std::endl;
    }
};

class MediationAdapter : public GooglePlugin
{
private:
    FacebookAdsPlugin* facebookPlugin = nullptr;
public:
    MediationAdapter(FacebookAdsPlugin *facebookPlugin)
    {
        this->facebookPlugin = facebookPlugin;
    }

public:
    virtual void Init(int UUID) override
    {
        facebookPlugin->InitFacebook(UUID);
    }
    virtual void DoSomething() override
    {
        facebookPlugin->ShowAds();
    }
};

int main()
{
    std::vector<GooglePlugin*> adsPluginList = std::vector<GooglePlugin*>();

    adsPluginList.push_back(new GoogleAdsPlugin());
    adsPluginList.push_back(new MediationAdapter(new FacebookAdsPlugin()));

    for (int i = 0; i < adsPluginList.size(); i++)
    {
        adsPluginList[i]->Init(1001);
    }

    for (int i = 0; i < adsPluginList.size(); i++)
    {
        adsPluginList[i]->DoSomething();
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
