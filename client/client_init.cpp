/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_init.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrazik <aerrazik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:36:24 by aerrazik          #+#    #+#             */
/*   Updated: 2023/09/24 15:08:06 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.hpp"

Client::Client(): _nickname(""), _username(""), _realname(""), _status(0), _channel(""), check_pass(0) {}

Client::Client(const Client &client) {*this = client;}

Client &Client::operator=(const Client &client)
{
    if (this != &client)
    {
        _nickname = client._nickname;
        _username = client._username;
    }
    return (*this);
}

void    Client::set_nickname(std::string nickname) {
    _nickname = nickname;
}

void    Client::set_username(std::string username) {
    _username = username;
}

void    Client::set_realname(std::string realname) {
    _realname = realname;
}

void    Client::set_hostname(std::string hostname) {
    _hostname = hostname;
}

void    Client::set_status(int status) {
    _status = status;
}

void    Client::set_channel(std::string channel) {
    _channel = channel;
}

void    Client::set_check_pass(int check_pass) {
    this->check_pass = check_pass;
}

std ::string    Client::get_nickname() const {
    return (_nickname);
}

std ::string    Client::get_username() const {
    return (_username);
}

std ::string    Client::get_realname() const {
    return (_realname);
}

std ::string    Client::get_hostname() const {
    return (_hostname);
}

int    Client::get_status() const {
    return (_status);
}

int    Client::get_check_pass() const {
    return (check_pass);
}

Client::~Client() {}

std::string Client::get_channel() const {
    return (_channel);
}

std::string	Client::get_prefix() const {
	return get_nickname() + "!" + get_username() + "@" + get_hostname();
}
