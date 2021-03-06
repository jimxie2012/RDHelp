// -*- C++ -*-
//
// $Id: HTTP_Request.inl 90450 2010-06-08 07:25:58Z mcorino $

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

namespace ACE
{
  namespace HTTP
  {

    ACE_INLINE
    void Request::reset ()
      {
        this->clear ();
        this->set_version (HTTP_1_0);
        this->method_ = HTTP_GET;
        this->uri_ = "/";
      }

    ACE_INLINE
    void Request::reset (const ACE_CString& version)
      {
        this->clear ();
        this->set_version (version);
        this->method_ = HTTP_GET;
        this->uri_ = "/";
      }

    ACE_INLINE
    void Request::reset (const ACE_CString& method, const ACE_CString& uri)
      {
        this->clear ();
        this->set_version (HTTP_1_0);
        this->method_ = method;
        this->uri_ = uri;
      }

    ACE_INLINE
    void Request::reset (const ACE_CString& method, const ACE_CString& uri, const ACE_CString& version)
      {
        this->clear ();
        this->set_version (version);
        this->method_ = method;
        this->uri_ = uri;
      }

    ACE_INLINE
    void Request::set_method(const ACE_CString& method)
      {
        this->method_ = method;
      }

    ACE_INLINE
    const ACE_CString& Request::get_method() const
      {
        return this->method_;
      }

    ACE_INLINE
    void Request::set_URI(const ACE_CString& uri)
      {
        this->uri_ = uri;
      }

    ACE_INLINE
    const ACE_CString& Request::get_URI() const
      {
        return this->uri_;
      }

    ACE_INLINE
    void Request::set_host(const ACE_CString& host)
      {
        this->set (HOST, host);
      }

    ACE_INLINE
    bool Request::has_host () const
      {
        return this->has (HOST);
      }

    ACE_INLINE
    ACE_CString Request::get_host() const
      {
        ACE_CString val;
        this->get (HOST, val);
        return val;
      }

    ACE_INLINE
    bool Request::has_credentials() const
      {
        return this->has (AUTHORIZATION);
      }

  }
}

ACE_END_VERSIONED_NAMESPACE_DECL
