#ifndef _COWSITE_H_
#define _COWSITE_H_

// this is a virtual class
// (since pretty much everyone overrides SetSite)

class CObjectWithSite : public IObjectWithSite
{
public:
    //*** IUnknown ****
    // (client must provide!)

    //*** IObjectWithSite ***
    virtual STDMETHODIMP SetSite(IUnknown *punkSite) = 0;
    virtual STDMETHODIMP GetSite(REFIID riid, void **ppvSite);

protected:
    IUnknown*   _punkSite;
};

#endif
